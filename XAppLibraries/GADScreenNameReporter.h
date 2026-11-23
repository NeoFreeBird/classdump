//
#ifndef GADScreenNameReporter_h
#define GADScreenNameReporter_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSObject, NSString;

@interface GADScreenNameReporter : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    _Bool _hasSetScreenName;
    NSString *_adScreenName;
    NSString *_previousScreenName;
    NSString *_previousScreenClass;
}

/* instance methods */
- (id)initWithPresenter:(id)presenter adScreenName:(id)name;
- (void)setScreenName;

@end

#endif /* GADScreenNameReporter_h */
