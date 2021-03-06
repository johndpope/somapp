//
//  QuizViewController.h
//  EarConditioner iOS
//
//  Created by Maurizio Frances on 21/01/14.
//  Copyright (c) 2014 Michael Norris. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SummaryViewController.h"
@class MNBaseSequence;
@class MNMusicSequence;

@interface QuizViewController : UIViewController <SummaryVC>

-(IBAction)playRandomMelody:(id)sender;
- (IBAction)replayMelody:(id)sender;
-(IBAction)replayHalfMelody:(id)sender;
-(IBAction)replayHalfMelodyWithChange:(id)sender;



@property (nonatomic, strong) MNBaseSequence *questionBaseSequence;
@property (nonatomic, strong) IBOutlet UITextView *textView;
@property (nonatomic, strong) IBOutlet UIImageView *imageView;

@property int dynamicProfile,oldMode1,oldMode2,oldEnum1,oldEnum2,barStartForHalfMelody;
@property float timeStartForHalfMelody,durationOfHalfMelody;
@property (nonatomic, strong) MNMusicSequence *questionHalfMusicSequence;
@property (nonatomic, strong) MNMusicSequence *questionHalfWithChangeMusicSequence;


//NEW CODE


@property int timeSigEnum, mode, melodyDirection, isPitchChange, questionNumber, answer1, answer2;
@property NSMutableArray *scoreSheet;

@property BOOL retryingQuestion;
@property BOOL transitionFinished;
@property BOOL repeatingPlay;

@property NSTimer *repeatTimer;
@property NSTimer *delayStartTimer;



@property int playCountForQuestion;

@property (weak, nonatomic) IBOutlet UILabel *subtitleLbl;

@property (weak, nonatomic) IBOutlet UILabel *questionLbl;
@property (weak, nonatomic) IBOutlet UIImageView *quizProgressImg;
@property (weak, nonatomic) IBOutlet UIButton *checkAnswerBtn;
@property (weak, nonatomic) IBOutlet UIButton *summaryBtn;

@property (weak, nonatomic) IBOutlet UIView *buttonGroup1;
@property (weak, nonatomic) IBOutlet UIView *buttonGroup2;
@property (weak, nonatomic) IBOutlet UIView *buttonGroup3;
@property (weak, nonatomic) IBOutlet UIView *buttonGroup3_part1;
@property (weak, nonatomic) IBOutlet UIView *buttonGroup3_part2;

@property (weak, nonatomic) IBOutlet UIView *buttonGroup4;

-(void) generateRandomMelody;
-(void) generateHalfMelody;
-(void) generateHalfMelodyWithChange;

-(void) afterTimerPlayMelody:(bool)isHalfMelody;

-(void) playMelody;
-(void) playHalfMelody;
-(void) playHalfMelodyWithChange;
-(void) displayQuestion;
-(void) displayButtonGroup;
-(void) checkAnswerWith:(int)answer1 And:(int)answer2;
-(void) nextQuestion;
-(void) deselectAllButtons;
-(void) showSelectedButton: (id)sender;

-(void) setToQuestion:(int)Number;
-(void) retryAllWithNewMelody;
-(void) retryAllWithSameMelody;

-(void)melodyPlayingTimer:(float)length;
-(void)repeatMelodyCheck;

- (IBAction)clickAnswer1:(id)sender;
- (IBAction)clickAnswer2:(id)sender;

- (IBAction)clickCheckAnswer:(id)sender;
- (IBAction)clickSummaryPage:(id)sender;

- (IBAction)clickQuitTest:(id)sender;

@end
