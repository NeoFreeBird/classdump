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
