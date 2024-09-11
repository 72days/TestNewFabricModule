
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRTNMute4Spec.h"

@interface RTNMute4 : NSObject <NativeRTNMute4Spec>
#else
#import <React/RCTBridgeModule.h>

@interface RTNMute4 : NSObject <RCTBridgeModule>
#endif

@end
