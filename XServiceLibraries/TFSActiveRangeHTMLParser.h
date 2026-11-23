//
#ifndef TFSActiveRangeHTMLParser_h
#define TFSActiveRangeHTMLParser_h
@import Foundation;

@class NSArray, NSDictionary, NSObject, NSString;

@interface TFSActiveRangeHTMLParser : NSObject

@property (copy, nonatomic) NSString *parsedText;
@property (copy, nonatomic) NSArray *activeRanges;
@property (copy, nonatomic) NSDictionary *references;
@property (readonly, nonatomic) NSString *html;

/* instance methods */
- (id)initWithHTML:(id)html;
- (_Bool)parse;
- (id)init;

@end

#endif /* TFSActiveRangeHTMLParser_h */
