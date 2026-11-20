//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLTBackgroundFetchTask_h
#define TLTBackgroundFetchTask_h
@import Foundation;

#include "TLTBackgroundFetchManager.h"

@class NSObject, NSString;

@interface TLTBackgroundFetchTask : NSObject {
    /* instance variables */
    TLTBackgroundFetchManager *_owningManager;
}

@property (readonly, nonatomic) NSString *identifier;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (void)setOwningManager:(id)manager;
- (id)owningManager;
- (id)description;

@end

#endif /* TLTBackgroundFetchTask_h */
