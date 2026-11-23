//
#ifndef PTVProfileImageUtil_h
#define PTVProfileImageUtil_h
@import Foundation;

@class NSObject;

@interface PTVProfileImageUtil : NSObject

/* class methods */
+ (id)ProfileImageURLStringFromArray:(id)array DesiredSizeInPoints:(struct CGSize { double x0; double x1; })points;
+ (id)ProfileImageURLStringFromArray:(id)array DesiredSizeInPoints:(struct CGSize { double x0; double x1; })points TraitCollection:(id)collection;
+ (struct CGSize { double x0; double x1; })SizeForProfileImageType:(unsigned long long)type;
+ (void)LoadImageEntityForWorkClient:(id)client WithProfileImageType:(unsigned long long)type FromProfileImageURLs:(id)urls CropCircle:(_Bool)circle;
+ (id)ImagesFromArray:(id)array;
+ (id /* block */)cropCircleProcessor;
+ (id)DefaultURLForImageType:(unsigned long long)type;

@end

#endif /* PTVProfileImageUtil_h */
