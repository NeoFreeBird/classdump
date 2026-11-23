//
#ifndef TFSModelCacheConfiguration_h
#define TFSModelCacheConfiguration_h
@import Foundation;

#include "TFSDatabaseUIApplicationLink.h"

@class NSArray, NSObject, NSString;

@interface TFSModelCacheConfiguration : NSObject

@property (readonly, nonatomic) _Bool isDiskCacheTransient;
@property (readonly, nonatomic) _Bool isDiskCacheReadOnly;
@property (readonly, copy, nonatomic) NSString *directoryPath;
@property (readonly, nonatomic) long long memoryEvictableObjectCapacity;
@property (readonly, nonatomic) long long diskEvictableObjectCapacity;
@property (readonly, nonatomic) NSArray *codecs;
@property (readonly, copy, nonatomic) id /* block */ errorDestination;
@property (readonly, copy, nonatomic) id /* block */ debugLogDestination;
@property (readonly, copy, nonatomic) id /* block */ diagnosticTypeNameFromKey;
@property (readonly, nonatomic) TFSDatabaseUIApplicationLink *applicationLink;
@property (readonly, nonatomic) _Bool dependencyGraphLoggingEnabled;

/* class methods */
+ (id)defaultDirectoryPath;
+ (id)transientCacheConfigurationWithMemoryEvictableObjectCapacity:(long long)capacity diskEvictableObjectCapacity:(long long)capacity codecs:(id)codecs errorDestination:(id /* block */)destination debugLogDestination:(id /* block */)destination diagnosticTypeNameFromKey:(id /* block */)key dependencyGraphLoggingEnabled:(_Bool)enabled;

/* instance methods */
- (id)initWithReadOnlyDiskCache:(_Bool)cache transientDiskCache:(_Bool)cache directoryPath:(id)path memoryEvictableObjectCapacity:(long long)capacity diskEvictableObjectCapacity:(long long)capacity codecs:(id)codecs errorDestination:(id /* block */)destination debugLogDestination:(id /* block */)destination diagnosticTypeNameFromKey:(id /* block */)key applicationLink:(id)link dependencyGraphLoggingEnabled:(_Bool)enabled;
- (id)initWithDirectoryPath:(id)path memoryEvictableObjectCapacity:(long long)capacity diskEvictableObjectCapacity:(long long)capacity codecs:(id)codecs errorDestination:(id /* block */)destination debugLogDestination:(id /* block */)destination diagnosticTypeNameFromKey:(id /* block */)key applicationLink:(id)link dependencyGraphLoggingEnabled:(_Bool)enabled;
- (id)initWithReadOnlyDirectoryPath:(id)path memoryEvictableObjectCapacity:(long long)capacity codecs:(id)codecs errorDestination:(id /* block */)destination debugLogDestination:(id /* block */)destination diagnosticTypeNameFromKey:(id /* block */)key applicationLink:(id)link dependencyGraphLoggingEnabled:(_Bool)enabled;
- (id)copyWithCodecs:(id)codecs;
- (id)codecFromCodecIdentifier:(long long)identifier;

@end

#endif /* TFSModelCacheConfiguration_h */
