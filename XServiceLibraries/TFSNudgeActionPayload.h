//
#ifndef TFSNudgeActionPayload_h
#define TFSNudgeActionPayload_h
@import Foundation;

@class NSObject, NSString;

@interface TFSNudgeActionPayload : NSObject // (Swift)

@property (nonatomic, readonly) NSString *ctaTitle;
@property (nonatomic, readonly) NSString *ctaUrl;
@property (nonatomic, readonly) NSString *heading;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) NSString *postCtaText;
@property (nonatomic, readonly) NSString *subheading;

/* instance methods */
- (id)initWithCtaTitle:(id)title ctaUrl:(id)url heading:(id)heading iconName:(id)name postCtaText:(id)text subheading:(id)subheading;
- (id)init;

@end

#endif /* TFSNudgeActionPayload_h */
