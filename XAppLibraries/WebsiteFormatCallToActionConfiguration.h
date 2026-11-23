//
#ifndef WebsiteFormatCallToActionConfiguration_h
#define WebsiteFormatCallToActionConfiguration_h
@import Foundation;

@class NSObject;

@interface WebsiteFormatCallToActionConfiguration : NSObject // (Swift)

@property (nonatomic, readonly) _Bool hideDetailsUrl;
@property (nonatomic, readonly) _Bool showVisitButton;
@property (nonatomic, readonly) _Bool isButtonOutlined;
@property (nonatomic, readonly) _Bool isFullWidthButton;
@property (nonatomic, readonly) _Bool visitButtonColorChange;

/* instance methods */
- (id)initWithCallToActionName:(id)name;
- (id)init;

@end

#endif /* WebsiteFormatCallToActionConfiguration_h */
