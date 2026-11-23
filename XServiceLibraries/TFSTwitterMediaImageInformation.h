//
#ifndef TFSTwitterMediaImageInformation_h
#define TFSTwitterMediaImageInformation_h
@import Foundation;

@class NSObject;

@interface TFSTwitterMediaImageInformation : NSObject

@property (readonly, nonatomic) long long imageType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;

@end

#endif /* TFSTwitterMediaImageInformation_h */
