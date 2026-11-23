//
#ifndef Subsystem_ios_iosArm64_mainApiGraphqlApi_Protocol_h
#define Subsystem_ios_iosArm64_mainApiGraphqlApi_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainApiGraphqlApi

@required

/* required instance methods */
- (void)callMutationMutation:(id)mutation additionalHeaders:(id)headers storeInCache:(id)cache completionHandler:(id /* block */)handler;
- (void)callMutationMutation:(id)mutation additionalHeaders:(id)headers storeInCache:(id)cache completionHandler:(id /* block */)handler;
- (void)clearCacheWithCompletionHandler:(id /* block */)handler;
- (void)clearCacheWithCompletionHandler:(id /* block */)handler;
- (void)fetchFromNetworkQuery:(id)query additionalHeaders:(id)headers storeInCache:(id)cache method:(id)method acceptableErrorPath:(id)path executionContext:(id)context completionHandler:(id /* block */)handler;
- (void)fetchFromNetworkQuery:(id)query additionalHeaders:(id)headers storeInCache:(id)cache method:(id)method acceptableErrorPath:(id)path executionContext:(id)context completionHandler:(id /* block */)handler;
- (void)fetchFromNetworkWithErrorsQuery:(id)query additionalHeaders:(id)headers storeInCache:(id)cache method:(id)method executionContext:(id)context completionHandler:(id /* block */)handler;
- (void)fetchFromNetworkWithErrorsQuery:(id)query additionalHeaders:(id)headers storeInCache:(id)cache method:(id)method executionContext:(id)context completionHandler:(id /* block */)handler;
- (id)observeCacheQuery:(id)query additionalHeaders:(id)headers memoryCacheOnly:(_Bool)only;
- (id)observeCacheQuery:(id)query additionalHeaders:(id)headers memoryCacheOnly:(_Bool)only;
- (id)observeCacheAndFetchQuery:(id)query additionalHeaders:(id)headers emitFailureAfterSuccess:(_Bool)success method:(id)method acceptableErrorPath:(id)path onRawApolloResponse:(id)response;
- (id)observeCacheAndFetchQuery:(id)query additionalHeaders:(id)headers emitFailureAfterSuccess:(_Bool)success method:(id)method acceptableErrorPath:(id)path onRawApolloResponse:(id)response;
- (id)observeCacheOrFetchQuery:(id)query additionalHeaders:(id)headers emitFailureAfterSuccess:(_Bool)success method:(id)method acceptableErrorPath:(id)path onRawApolloResponse:(id)response;
- (id)observeCacheOrFetchQuery:(id)query additionalHeaders:(id)headers emitFailureAfterSuccess:(_Bool)success method:(id)method acceptableErrorPath:(id)path onRawApolloResponse:(id)response;
- (void)optimizeCacheMaxAge:(id)age completionHandler:(id /* block */)handler;
- (void)optimizeCacheMaxAge:(id)age completionHandler:(id /* block */)handler;
- (void)readFragmentFromCacheFragment:(id)fragment cacheKey:(id)key completionHandler:(id /* block */)handler;
- (void)readFragmentFromCacheFragment:(id)fragment cacheKey:(id)key completionHandler:(id /* block */)handler;
- (void)readQueryFromCacheQuery:(id)query completionHandler:(id /* block */)handler;
- (void)readQueryFromCacheQuery:(id)query completionHandler:(id /* block */)handler;
- (void)writeQueryToCacheQuery:(id)query data:(id)data completionHandler:(id /* block */)handler;
- (void)writeQueryToCacheQuery:(id)query data:(id)data completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainApiGraphqlApi_Protocol_h */
