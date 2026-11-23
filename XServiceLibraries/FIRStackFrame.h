//
#ifndef FIRStackFrame_h
#define FIRStackFrame_h
@import Foundation;

@class NSObject, NSString;

@interface FIRStackFrame : NSObject

@property (copy, nonatomic) NSString *symbol;
@property (copy, nonatomic) NSString *rawSymbol;
@property (copy, nonatomic) NSString *library;
@property (copy, nonatomic) NSString *fileName;
@property (nonatomic) unsigned int lineNumber;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long address;
@property (nonatomic) _Bool isSymbolicated;

/* class methods */
+ (id)stackFrameWithAddress:(unsigned long long)address;
+ (id)stackFrameWithSymbol:(id)symbol file:(id)file line:(long long)line;
+ (id)stackFrame;
+ (id)stackFrameWithSymbol:(id)symbol;

/* instance methods */
- (id)initWithSymbol:(id)symbol file:(id)file line:(long long)line;
- (id)description;

@end

#endif /* FIRStackFrame_h */
