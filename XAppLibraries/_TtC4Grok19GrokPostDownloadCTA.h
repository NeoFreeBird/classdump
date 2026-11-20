//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok19GrokPostDownloadCTA_h
#define _TtC4Grok19GrokPostDownloadCTA_h
@import Foundation;

@class Grok.GrokBotReplyCTAMarkStyle, Grok.GrokPostDownloadSurface, Grok.GrokPostDownloadTarget, NSObject, NSString, _$sSS;

@interface Grok.GrokPostDownloadCTA : NSObject { // (Swift)
    /* instance variables */
    Grok.GrokBotReplyCTAMarkStyle replyMarkStyle;
}

@property (nonatomic, readonly) long long target;
@property (nonatomic, readonly) long long surface;
@property (nonatomic, readonly) NSString *title;

/* class methods */
+ (id)eventStateKey;
+ (id)botEventParametersWithStatusID:(long long)id;

/* instance methods */
- (id)grokBotLogoImageWithSize:(double)size scale:(double)scale;
- (void)logBotAction:(id)action page:(id)page section:(id)section component:(id)component statusID:(long long)id accountID:(id)id;
- (void)openBotWithFeatureAccess:(id)access accountID:(id)id from:(id)from;
- (id)init;

@end

#endif /* _TtC4Grok19GrokPostDownloadCTA_h */
