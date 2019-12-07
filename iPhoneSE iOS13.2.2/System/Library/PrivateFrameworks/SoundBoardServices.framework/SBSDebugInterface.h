/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSImplementer;
@class NSXPCConnection;

@interface SBSDebugInterface : NSObject {

	NSXPCConnection* _sbConnection;
	id<SBSImplementer> _sbProxy;

}
-(id)init;
-(void)getAllDebugInfo:(/*^block*/id)arg1 ;
-(void)getTuningInfo:(/*^block*/id)arg1 ;
-(void)setTuningInfoOnBox:(id)arg1 at:(id)arg2 withValue:(float)arg3 ;
-(void)playTone:(unsigned)arg1 ;
-(void)stopTone:(unsigned)arg1 ;
-(void)getUserDefaults:(/*^block*/id)arg1 ;
-(void)setUserDefaults:(id)arg1 withValue:(id)arg2 ;
-(void)resetAllUserDefaults;
-(void)resetUserDefault:(id)arg1 ;
@end
