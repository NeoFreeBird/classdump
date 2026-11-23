//
#ifndef GrokTranslationState_h
#define GrokTranslationState_h
@import Foundation;

@class NSArray, NSObject, NSString, TFSTwitterEntitySet;

@interface GrokTranslationState : NSObject // (Swift)

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSArray *urls;
@property (nonatomic, copy) NSArray *mentions;
@property (nonatomic, copy) NSArray *hashtags;
@property (nonatomic, copy) NSArray *symbols;
@property (nonatomic, copy) NSArray *timestamps;
@property (nonatomic, copy) NSArray *polls;
@property (nonatomic, copy) NSArray *richTextEntities;
@property (nonatomic, readonly) TFSTwitterEntitySet *entitySet;

/* instance methods */
- (void)appendTranslationResults:(id)results;
- (id)init;

@end

#endif /* GrokTranslationState_h */
