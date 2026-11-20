//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ToastBox_h
#define T1ToastBox_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject;

@interface T1ToastBox : NSObject

@property (readonly, nonatomic) id <TFNToastViewModel> toast;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) _Bool toastsUpdateEnabled;

/* instance methods */
- (id)initWithToast:(id)toast priority:(unsigned long long)priority toastsUpdateEnabled:(_Bool)enabled;

@end

#endif /* T1ToastBox_h */
