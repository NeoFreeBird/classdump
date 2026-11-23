//
#ifndef _TtP20TwitterActionService9TASLogger__Protocol_h
#define _TtP20TwitterActionService9TASLogger__Protocol_h
@import Foundation;

@protocol TwitterActionService.TASLogger

@required

/* required instance methods */
- (_Bool)tas_canLogWithLevel:(long long)level;
- (void)tas_logWithLevel:(long long)level file:(id)file function:(id)function line:(long long)line message:(id)message;

@optional

@end

#endif /* _TtP20TwitterActionService9TASLogger__Protocol_h */
