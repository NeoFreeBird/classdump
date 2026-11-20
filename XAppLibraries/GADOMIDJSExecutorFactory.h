//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDJSExecutorFactory_h
#define GADOMIDJSExecutorFactory_h
@import Foundation;

@class NSObject;

@interface GADOMIDJSExecutorFactory : NSObject

/* class methods */
+ (id)JSExecutorForContext:(id)context;
+ (id)JSExecutorWithWebView:(id)view;
+ (id)JSExecutorWithResources:(id)resources script:(id)script;

@end

#endif /* GADOMIDJSExecutorFactory_h */
