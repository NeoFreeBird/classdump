//
#ifndef GADNativeTemplateView_h
#define GADNativeTemplateView_h
@import Foundation;

@class NSString, UIView;

@interface GADNativeTemplateView : UIView

@property (retain, nonatomic) NSString *templateTypeName;

/* instance methods */
- (id)getTemplateTypeName;

@end

#endif /* GADNativeTemplateView_h */
