//
#ifndef TNUURLHTMLTitleRetrieverContext_h
#define TNUURLHTMLTitleRetrieverContext_h
@import Foundation;

#include "TNUHTMLTagParser.h"

@class NSObject, NSString;

@interface TNUURLHTMLTitleRetrieverContext : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) TNUHTMLTagParser *parser;
@property (nonatomic) unsigned long long encoding;
@property (nonatomic) unsigned long long redirectCount;
@property (nonatomic) unsigned long long bytesReceived;

/* instance methods */

@end

#endif /* TNUURLHTMLTitleRetrieverContext_h */
