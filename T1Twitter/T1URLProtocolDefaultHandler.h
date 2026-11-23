//
#ifndef T1URLProtocolDefaultHandler_h
#define T1URLProtocolDefaultHandler_h
@import Foundation;

#include "T1URLProtocolDefaultHandlerConfiguration-Protocol.h"
#include "TFSURLProtocolHandler-Protocol.h"

@class NSDictionary, NSObject, NSSet, NSString;

@interface T1URLProtocolDefaultHandler : NSObject <TFSURLProtocolHandler> {
    /* instance variables */
    NSSet *_schemes;
    NSDictionary *_flowClassMap;
}

@property (readonly, nonatomic) id <T1URLProtocolDefaultHandlerConfiguration> configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)peopleAddressBookURL;

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration;
- (id)schemes;
- (_Bool)protocolRouter:(id)router supportsScheme:(id)scheme;
- (unsigned long long)protocolRouter:(id)router handleURL:(id)url context:(id)context;
- (unsigned long long)protocolRouter:(id)router handleURL:(id)url context:(id)context routeCompletion:(id /* block */)completion;
- (unsigned long long)_t1_protocolRouter:(id)router handleURL:(id)url context:(id)context routeCompletion:(id /* block */)completion;
- (void)_t1_loginWithTokenForPasswordReset:(id)reset completion:(id /* block */)completion;
- (_Bool)_t1_handleIntentRoute:(id)route appNavigation:(id)navigation source:(long long)source arguments:(id)arguments account:(id)account referrer:(id)referrer completion:(id /* block */)completion;
- (_Bool)_t1_shouldDenyAccessForTeamsAccount:(id)account;
- (void)_t1_showDisabledSettingsForTeamsAccount:(id)account completion:(id /* block */)completion;
- (void)_t1_showDisabledProfileForTeamsAccount:(id)account completion:(id /* block */)completion;

@end

#endif /* T1URLProtocolDefaultHandler_h */
