//
#ifndef T1MangaTranslatedMediaHelper_h
#define T1MangaTranslatedMediaHelper_h
@import Foundation;

@class NSObject;

@interface T1MangaTranslatedMediaHelper : NSObject // (Swift)

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (_Bool)hasTranslatedMediaFor:(id)_for;
- (_Bool)isDisplayingTranslatedMediaFor:(id)_for account:(id)account;
- (id)mediaInfosByApplyingTranslatedImagesTo:(id)to;
- (id)mediaInfoByApplyingTranslatedImageTo:(id)to;
- (id)translatedImageURLStringForMediaEntity:(id)entity;

@end

#endif /* T1MangaTranslatedMediaHelper_h */
