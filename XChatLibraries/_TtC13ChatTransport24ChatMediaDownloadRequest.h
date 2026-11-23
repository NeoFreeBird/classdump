//
#ifndef _TtC13ChatTransport24ChatMediaDownloadRequest_h
#define _TtC13ChatTransport24ChatMediaDownloadRequest_h
@import Foundation;

#include "_TtC13ChatTransport16ChatMediaRequest.h"

@class __C.TNLPriority;

@interface ChatTransport.ChatMediaDownloadRequest : ChatTransport.ChatMediaRequest { // (Swift)
    /* instance variables */
    __C.TNLPriority priority;
}

@property (nonatomic, readonly) long long requestPriority;

/* class methods */
+ (long long)HTTPMethodValue;
+ (id)configuration;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;

@end

#endif /* _TtC13ChatTransport24ChatMediaDownloadRequest_h */
