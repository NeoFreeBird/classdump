//
#ifndef _TtC12TweetDetails28GrokBirdwatchTranslateHelper_h
#define _TtC12TweetDetails28GrokBirdwatchTranslateHelper_h
@import Foundation;

@class NSObject, _$sSo7NSCacheCySo8NSStringC TweetDetails.GrokBirdwatchTranslationInfo;

@interface TweetDetails.GrokBirdwatchTranslateHelper : NSObject { // (Swift)
    /* instance variables */
    __C.NSCache empty-list __C.NSString TweetDetails.GrokBirdwatchTranslationInfo cache;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (id)getFor:(id)_for;
- (id)getOrCreateFor:(id)_for;

@end

#endif /* _TtC12TweetDetails28GrokBirdwatchTranslateHelper_h */
