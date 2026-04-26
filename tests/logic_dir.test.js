/**
 * @file logic_dir.test.js
 * @brief Automated logic verification for P-regulator
 */

import { describe, test, expect } from 'vitest';

function calculateOutput(target, current, kp) {
    const error = target - current;
    return kp * error;
}

describe('P-Regulator Logic Verification', () => {
    const TARGET = 100;
    const KP = 0.5;

    test('Output should decrease as error decreases (Linearity)', () => {
        const out1 = calculateOutput(TARGET, 20, KP); // Error = 80
        const out2 = calculateOutput(TARGET, 80, KP); // Error = 20
        
        expect(out1).toBeGreaterThan(out2);
    });

    test('Output should be zero when target is reached', () => {
        const out = calculateOutput(TARGET, TARGET, KP);
        expect(out).toBe(0);
    });

    test('Negative feedback direction (Correct Sign)', () => {
        const outPos = calculateOutput(TARGET, 50, KP); // Target > Current -> Positive output
        const outNeg = calculateOutput(TARGET, 150, KP); // Target < Current -> Negative output
        
        expect(outPos).toBeGreaterThan(0);
        expect(outNeg).toBeLessThan(0);
    });
});
