//
#ifndef GADWKScriptConfiguration_h
#define GADWKScriptConfiguration_h
@import Foundation;

@class NSObject, NSString;

@interface GADWKScriptConfiguration : NSObject

@property (readonly, nonatomic) NSString *script;
@property (readonly, nonatomic) long long injectionTime;
@property (readonly, nonatomic) _Bool forMainFrameOnly;

/* instance methods */
- (id)initWithScript:(id)script injectionTime:(long long)time forMainFrameOnly:(_Bool)only;

@end

#endif /* GADWKScriptConfiguration_h */
