//
#ifndef GrokTranslationResult_h
#define GrokTranslationResult_h
@import Foundation;

@class NSObject, NSString, TFSTwitterEntitySet;

@interface GrokTranslationResult : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 contentType;
    @40@0:8:16@24@32 entities;
    @40@0:8:16@24@32 richTextEntities;
    @40@0:8:16@24@32 index;
}

@property (nonatomic, readonly) TFSTwitterEntitySet *twitterEntitySet;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *description;

/* instance methods */

@end

#endif /* GrokTranslationResult_h */
