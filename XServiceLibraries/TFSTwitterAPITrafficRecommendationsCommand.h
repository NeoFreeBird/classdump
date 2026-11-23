//
#ifndef TFSTwitterAPITrafficRecommendationsCommand_h
#define TFSTwitterAPITrafficRecommendationsCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSString;

@interface TFSTwitterAPITrafficRecommendationsCommand : TFSTwitterAPICommand {
    /* instance variables */
    NSString *_configurationKey;
    NSString *_configurationValue;
}

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id configurationKey:(id)key configurationValue:(id)value completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPITrafficRecommendationsCommand_h */
