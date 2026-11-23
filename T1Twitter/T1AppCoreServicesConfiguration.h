//
#ifndef T1AppCoreServicesConfiguration_h
#define T1AppCoreServicesConfiguration_h
@import Foundation;

#include "T1AppCoreServicesConfiguration-Protocol.h"
#include "TFSKeychainConfiguration-Protocol.h"
#include "TFSTwitterClientIdentificationProvider-Protocol.h"

@class NSObject, NSString;

@interface T1AppCoreServicesConfiguration : NSObject <T1AppCoreServicesConfiguration>

@property (readonly, nonatomic) id <TFSTwitterClientIdentificationProvider> clientIdentificationProvider;
@property (readonly, nonatomic) id <TFSKeychainConfiguration> keychainConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithClientIdentificationProvider:(id)provider keychainConfiguration:(id)configuration;

@end

#endif /* T1AppCoreServicesConfiguration_h */
