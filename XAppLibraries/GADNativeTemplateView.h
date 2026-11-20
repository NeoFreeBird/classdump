//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
