//
#ifndef T1CardStarRatings_h
#define T1CardStarRatings_h
@import Foundation;

@class NSObject;

@interface T1CardStarRatings : NSObject

/* class methods */
+ (id)starTypesForRatingScore:(double)score;
+ (unsigned long long)count;
+ (id)starImagesForRatingScore:(double)score small:(_Bool)small;
+ (id)starImagesForRatingScore:(double)score small:(_Bool)small darkBackground:(_Bool)background;
+ (id)_imageForStarType:(unsigned long long)type small:(_Bool)small darkBackground:(_Bool)background;

@end

#endif /* T1CardStarRatings_h */
