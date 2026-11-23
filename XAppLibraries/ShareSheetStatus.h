//
#ifndef ShareSheetStatus_h
#define ShareSheetStatus_h
@import Foundation;

@class NSObject;

@interface ShareSheetStatus : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 id;
    @40@0:8:16@24@32 urlString;
    @40@0:8:16@24@32 twitterStatus;
}

/* instance methods */
- (id)initWithId:(long long)id urlString:(id)string twitterStatus:(id)status;
- (id)init;

@end

#endif /* ShareSheetStatus_h */
