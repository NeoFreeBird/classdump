//
#ifndef TFSTwitterTypeaheadResponse_h
#define TFSTwitterTypeaheadResponse_h
@import Foundation;

@class NSObject;

@interface TFSTwitterTypeaheadResponse : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 users;
    B24@0:8@"NSString"16 hashtags;
    B24@0:8@"NSString"16 topics;
    B24@0:8@"NSString"16 events;
    B24@0:8@"NSString"16 lists;
    B24@0:8@"NSString"16 cashtags;
}

/* instance methods */
- (id)init;

@end

#endif /* TFSTwitterTypeaheadResponse_h */
