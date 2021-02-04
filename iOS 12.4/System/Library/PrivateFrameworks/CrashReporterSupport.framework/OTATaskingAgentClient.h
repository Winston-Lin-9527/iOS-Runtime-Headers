/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OTATaskingAgent;
@class NSXPCConnection;

@interface OTATaskingAgentClient : NSObject {

	NSXPCConnection* _connection;
	id<OTATaskingAgent> _synchRemoteObjectProxy;

}
+(id)sharedClient;
-(unsigned)uidForUser:(id)arg1 ;
-(id)crashreporterKey;
-(id)awdKey;
-(BOOL)deletePreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 ;
-(BOOL)setPreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 toValue:(void*)arg4 ;
-(id)init;
@end
