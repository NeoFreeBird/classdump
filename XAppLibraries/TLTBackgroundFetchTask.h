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
