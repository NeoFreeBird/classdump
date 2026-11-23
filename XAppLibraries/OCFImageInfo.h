//
#ifndef OCFImageInfo_h
#define OCFImageInfo_h
@import Foundation;

@class NSObject, NSString;

@interface OCFImageInfo : NSObject

@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) NSString *altText;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFImageInfo_h */
