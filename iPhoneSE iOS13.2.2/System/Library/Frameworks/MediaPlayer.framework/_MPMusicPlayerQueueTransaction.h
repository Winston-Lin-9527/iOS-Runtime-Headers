/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _MPMusicPlayerQueueTransaction : NSObject {

	long long _state;
	/*^block*/id _completion;

}

@property (assign,nonatomic) long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) id completion;              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) id identifier; 
-(id)identifier;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)completion;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
@end
