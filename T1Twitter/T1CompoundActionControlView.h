//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CompoundActionControlView_h
#define T1CompoundActionControlView_h
@import Foundation;

#include "T1UserViewActionControl-Protocol.h"

@class NSString, TFSTwitterScribeContext, UIStackView;

@interface T1CompoundActionControlView : UIStackView <T1UserViewActionControl>

@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;

@end

#endif /* T1CompoundActionControlView_h */
