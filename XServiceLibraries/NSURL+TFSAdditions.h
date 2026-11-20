//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSURL_TFSAdditions_h
#define NSURL_TFSAdditions_h
@import Foundation;

@interface NSURL (TFSAdditions) <TNLURLEncodableObject>

/* class methods */
+ (id)URLWithUnicodeString:(id)string;
+ (id)URLWithUnicodeString:(id)string error:(id *)error;
+ (id)decodeUnicodeDomainString:(id)string;
+ (void)tnl_resolveHost:(id)host completion:(id /* block */)completion;
+ (id)tfs_URLWithString:(id)string;
+ (id)tfs_URLWithDisplayString:(id)string;

/* instance methods */
- (id)initWithUnicodeString:(id)string;
- (id)initWithUnicodeString:(id)string error:(id *)error;
- (id)unicodeAbsoluteString;
- (id)unicodeHost;
- (id)tnl_URLEncodableStringValue;
- (id)tnl_parameterStringCollection;
- (id)tnl_parameterStringCollectionWithOptions:(long long)options;
- (id)tnl_queryCollection;
- (id)tnl_queryCollectionWithOptions:(long long)options;
- (id)tnl_fragmentCollection;
- (id)tnl_fragmentCollectionWithOptions:(long long)options;
- (id)tnl_URLByReplacingHost:(id)host;
- (_Bool)x_isAnyXDomain;
- (_Bool)x_isXDomainWithSubdomain:(id)subdomain;
- (_Bool)x_isXHost;
- (_Bool)x_isXHostWithPath:(id)path;
- (_Bool)x_isXHostWithPathPrefix:(id)prefix;
- (_Bool)x_isXRoot;
- (_Bool)tfs_isAnyTwitterDomain;
- (_Bool)tfs_isTwitterDomainWithSubdomain:(id)subdomain;
- (_Bool)tfs_isTwitterHost;
- (_Bool)tfs_isTwitterHostWithPath:(id)path;
- (_Bool)tfs_isTwitterHostWithPathPrefix:(id)prefix;
- (_Bool)tfs_isKnownURL:(id)url;
- (_Bool)tfs_hasKnownURLPrefix:(id)urlprefix;
- (_Bool)tfs_isTwitterRoot;
- (id)tfs_absoluteString;
- (id)tfs_schemelessString;
- (id)tfs_wwwlessHostString;
- (id)tfs_displayString;
- (id)tfs_resourceString;
- (id)tfs_unparameterizedURLString;
- (id)tfs_parameterizedString;
- (id)tfs_parameterString;
- (_Bool)tfs_hasQueryItemWithName:(id)name;
- (_Bool)tfs_hostIsSubDomainOfString:(id)string;
- (id)tfs_URLByAppendingQueryItems:(id)items;
- (_Bool)tfs_hasHTTPScheme;
- (id)tfs_URLBySanitizingEmptySchemeAndEmptyHost;
- (id)tfs_URLByStrippingQueryParameters;
- (_Bool)tfs_isAppStoreDeepLink;
- (_Bool)_tfs_isAppleNewsDeepLink;
- (_Bool)tfs_isAppleDeepLink;
- (_Bool)tfs_isTalonLink;

@end

#endif /* NSURL_TFSAdditions_h */
