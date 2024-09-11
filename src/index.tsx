const RTNMute4 = require('./NativeRTNMute4').default;

export function multiply(a: number, b: number): number {
  return RTNMute4.multiply(a, b);
}
