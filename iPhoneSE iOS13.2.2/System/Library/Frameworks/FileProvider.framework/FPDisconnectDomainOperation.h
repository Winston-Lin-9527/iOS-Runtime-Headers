/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperation.h>

@class NSProgress, FPProviderDomain;

@interface FPDisconnectDomainOperation : FPActionOperation {

	NSProgress* _remoteProgress;
	FPProviderDomain* _domain;

}
-(void)cancel;
-(id)initWithDomain:(id)arg1 ;
-(void)actionMain;
-(void)_tryDisconnectingSafely:(BOOL)arg1 ;
@end
