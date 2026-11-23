//
#ifndef PTVAPIEndpoints_h
#define PTVAPIEndpoints_h
@import Foundation;

@class NSObject;

@interface PTVAPIEndpoints : NSObject

/* class methods */
+ (unsigned long long)Environment;
+ (void)SetEnvironment:(unsigned long long)environment;
+ (_Bool)EdgeProxiedHostsEnabled;
+ (void)SetEdgeProxiedHostsEnabled:(_Bool)enabled;
+ (id)Hostname;
+ (id)AppVersion;
+ (id)HostURLString;
+ (id)URLForAPIEndPoint:(id)point;
+ (id)URLForAPIEndPoint:(id)point UseTwitterPath:(_Bool)path;
+ (id)URLForAPIEndpoint:(id)apiendpoint APIVersionNumber:(id)number;
+ (id)URLForAPIEndpoint:(id)apiendpoint APIVersionNumber:(id)number UseTwitterPath:(_Bool)path;
+ (id)SignerURLForAPI:(id)api;
+ (id)SignerURLForAPI:(id)api WithHost:(id)host;

@end

#endif /* PTVAPIEndpoints_h */
