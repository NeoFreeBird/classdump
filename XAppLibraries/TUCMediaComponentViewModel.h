//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCMediaComponentViewModel_h
#define TUCMediaComponentViewModel_h
@import Foundation;

#include "TUCMediaComponentModel.h"

@class NSObject, TFSTwitterEntityMedia;

@interface TUCMediaComponentViewModel : NSObject

@property (readonly, nonatomic) TFSTwitterEntityMedia *mediaEntity;
@property (readonly, nonatomic) TUCMediaComponentModel *mediaComponent;

/* instance methods */
- (id)initWithMediaComponent:(id)component;
- (id)init;

@end

#endif /* TUCMediaComponentViewModel_h */
