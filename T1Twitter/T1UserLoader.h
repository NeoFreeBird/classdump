//
#ifndef T1UserLoader_h
#define T1UserLoader_h
@import Foundation;

@class NSObject;

@interface T1UserLoader : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
}

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)loadUsersWithIDs:(id)ids completion:(id /* block */)completion;
- (id)init;

@end

#endif /* T1UserLoader_h */
