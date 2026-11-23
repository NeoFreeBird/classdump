//
#ifndef T1BirdwatchPreloadedWebviewContainer_h
#define T1BirdwatchPreloadedWebviewContainer_h
@import Foundation;

#include "_TtC14T1TwitterSwift25PreloadedWebviewContainer.h"

@interface T1BirdwatchPreloadedWebviewContainer : T1TwitterSwift.PreloadedWebviewContainer { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *referringStatus;
}

/* instance methods */
- (id)initWithAccount:(id)account statusID:(long long)id fallbackURL:(id)url birdwatchSourceURL:(id)url useUpdatedRoutes:(_Bool)routes;
- (id)initWithAccount:(id)account noteID:(long long)id birdwatchSourceURL:(id)url fallbackURL:(id)url;
- (id)initWithAccount:(id)account suggestionID:(long long)id fallbackURL:(id)url;
- (id)initWithCoder:(id)coder;
- (void)setReferringStatus:(id)status;
- (void)dealloc;

@end

#endif /* T1BirdwatchPreloadedWebviewContainer_h */
