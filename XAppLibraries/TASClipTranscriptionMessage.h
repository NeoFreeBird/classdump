//
#ifndef TASClipTranscriptionMessage_h
#define TASClipTranscriptionMessage_h
@import Foundation;

@class NSObject;

@interface TASClipTranscriptionMessage : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 text;
    @40@0:8:16@24@32 userID;
    @40@0:8:16@24@32 deliveryDate;
}

/* instance methods */
- (id)initWithText:(id)text userID:(id)id deliveryDate:(id)date;
- (id)init;

@end

#endif /* TASClipTranscriptionMessage_h */
