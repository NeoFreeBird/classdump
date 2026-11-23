//
#ifndef TFSSupersizedEmojiValidator_h
#define TFSSupersizedEmojiValidator_h
@import Foundation;

@class NSObject;

@interface TFSSupersizedEmojiValidator : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 maximumNumberOfEmoji;
}

/* instance methods */
- (id)initWithMaximumNumberOfEmoji:(long long)emoji;
- (_Bool)isValidString:(id)string;
- (id)init;

@end

#endif /* TFSSupersizedEmojiValidator_h */
