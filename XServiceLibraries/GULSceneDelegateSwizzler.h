//
#ifndef GULSceneDelegateSwizzler_h
#define GULSceneDelegateSwizzler_h
@import Foundation;

@class NSProxy;

@interface GULSceneDelegateSwizzler : NSProxy

/* class methods */
+ (_Bool)isSceneDelegateProxyEnabled;
+ (void)proxyOriginalSceneDelegate;
+ (id)registerSceneDelegateInterceptor:(id)interceptor;
+ (void)unregisterSceneDelegateInterceptorWithID:(id)id;
+ (id)interceptors;
+ (void)clearInterceptors;
+ (id)originalImplementationForSelector:(SEL)selector object:(id)object;
+ (void)proxyDestinationSelector:(SEL)selector implementationsFromSourceSelector:(SEL)selector fromClass:(Class)_class toClass:(Class)_class realClass:(Class)_class storeDestinationImplementationTo:(id)to;
+ (void)addInstanceMethodWithSelector:(SEL)selector fromClass:(Class)_class toClass:(Class)_class;
+ (void)addInstanceMethodWithDestinationSelector:(SEL)selector withImplementationFromSourceSelector:(SEL)selector fromClass:(Class)_class toClass:(Class)_class;
+ (void * /* function */)implementationOfMethodSelector:(SEL)selector fromClass:(Class)_class;
+ (void)notifyInterceptorsWithMethodSelector:(SEL)selector callback:(id /* block */)callback;
+ (void)handleSceneWillConnectToNotification:(id)notification;
+ (void)proxySceneDelegateIfNeeded:(id)needed;
+ (id)correctSceneDelegateProxyKey;

/* instance methods */
- (void)scene:(id)scene openURLContexts:(id)urlcontexts;

@end

#endif /* GULSceneDelegateSwizzler_h */
