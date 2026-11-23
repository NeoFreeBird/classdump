//
#ifndef TEKAPIScribeClientEventRequest_h
#define TEKAPIScribeClientEventRequest_h
@import Foundation;

#include "TEKAPIRequest.h"

@class NSString;

@interface TEKAPIScribeClientEventRequest : TEKAPIRequest {
    /* instance variables */
    NSString *_filePath;
}

@property (readonly, copy, nonatomic) NSString *log;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, nonatomic) _Bool polling;
@property (readonly, nonatomic) _Bool backgroundRequest;

/* instance methods */
- (id)initWithLog:(id)log language:(id)language polling:(_Bool)polling backgroundRequest:(_Bool)request;
- (long long)HTTPMethodValue;
- (Class)responseClass;
- (id)endpointPath;
- (id)headers;
- (id)parameters;
- (id)HTTPBodyFilePath;
- (id)configuration;
- (_Bool)isBackgroundRequest;

@end

#endif /* TEKAPIScribeClientEventRequest_h */
