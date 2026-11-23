//
#ifndef TNLMutableHTTPRequest_h
#define TNLMutableHTTPRequest_h
@import Foundation;

#include "TNLHTTPRequest.h"

@class NSData, NSDictionary, NSInputStream, NSString, NSURL;

@interface TNLMutableHTTPRequest : TNLHTTPRequest

@property (retain, nonatomic) NSURL *URL;
@property (nonatomic) long long HTTPMethodValue;
@property (retain, nonatomic) NSData *HTTPBody;
@property (retain, nonatomic) NSInputStream *HTTPBodyStream;
@property (copy, nonatomic) NSString *HTTPBodyFilePath;
@property (copy, nonatomic) NSDictionary *allHTTPHeaderFields;

/* instance methods */
- (void)setValue:(id)value forHTTPHeaderField:(id)field;
- (void)removeAllValuesForHTTPHeaderField:(id)field;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithURL:(id)url HTTPMethodValue:(long long)value HTTPHeaderFields:(id)fields HTTPBody:(id)httpbody HTTPBodyStream:(id)stream HTTPBodyFilePath:(id)path;

@end

#endif /* TNLMutableHTTPRequest_h */
