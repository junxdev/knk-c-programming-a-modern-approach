/* Classifies a poker hand */

#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define RANK 0
#define SUIT 1
#define NUM_CARDS 5

/* external variables */
int hand[NUM_CARDS][2];
bool straight, flush, four, three;
int pairs; /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(void);
bool is_card_already_in_hand(int rank, int suit);
void sort_hand(void);
void analyze_hand(void);
void print_result(void);
void clear_hand(void);

/*
 * main: Calls read_cards, analyze_hand and print_result
 *       repeatedly.
 */
int main(void)
{
  for (;;)
  {
    read_cards();
    sort_hand();
    analyze_hand();
    print_result();
    clear_hand();
  }
}

/*
 * read_cards: Reads the cards into the external
 *             variables num_in_rank and num_in_suit;
 *             checks for bad cards and duplicate cards.
 */
void read_cards(void)
{
  char ch, rank_ch, suit_ch;
  int rank, suit, i;
  bool bad_card;
  int cards_read = 0;

  while (cards_read < NUM_CARDS)
  {
    bad_card = false;

    printf("Enter a card: ");

    rank_ch = getchar();
    switch (rank_ch)
    {
    case '0':
      exit(EXIT_SUCCESS);
    case '2':
      rank = 0;
      break;
    case '3':
      rank = 1;
      break;
    case '4':
      rank = 2;
      break;
    case '5':
      rank = 3;
      break;
    case '6':
      rank = 4;
      break;
    case '7':
      rank = 5;
      break;
    case '8':
      rank = 6;
      break;
    case '9':
      rank = 7;
      break;
    case 't':
    case 'T':
      rank = 8;
      break;
    case 'j':
    case 'J':
      rank = 9;
      break;
    case 'q':
    case 'Q':
      rank = 10;
      break;
    case 'k':
    case 'K':
      rank = 11;
      break;
    case 'a':
    case 'A':
      rank = 12;
      break;
    default:
      bad_card = true;
    }

    suit_ch = getchar();
    switch (suit_ch)
    {
    case 'c':
    case 'C':
      suit = 0;
      break;
    case 'd':
    case 'D':
      suit = 1;
      break;
    case 'h':
    case 'H':
      suit = 2;
      break;
    case 's':
    case 'S':
      suit = 3;
      break;
    default:
      bad_card = true;
    }

    while ((ch = getchar()) != '\n')
      if (ch != ' ')
        bad_card = true;

    if (bad_card)
      printf("Bad card; ignored.\n");
    else if (is_card_already_in_hand(rank, suit))
      printf("Duplicate card; ignored.\n");
    else
    {
      hand[cards_read][RANK] = rank;
      hand[cards_read][SUIT] = suit;
      cards_read++;
    }
  }
}

bool is_card_already_in_hand(int rank, int suit)
{
  int i;

  for (i = 0; i < NUM_CARDS; i++)
  {
    // suit has 0 but rank starts at 2, so it's safe not to initialize hand[][]
    if (hand[i][RANK] == rank && hand[i][SUIT] == suit)
    {
      return true;
    }
  }

  return false;
}

void sort_hand(void)
{
  int rank, suit, compared, now;

  for (compared = 1; compared < NUM_CARDS; compared++)
  {
    for (now = 0; now < NUM_CARDS - compared; now++)
    {
      rank = hand[now][0];
      if (rank > hand[now + 1][0])
      {
        hand[now][0] = hand[now + 1][0];
        hand[now + 1][0] = rank;

        suit = hand[now][1];
        hand[now][1] = hand[now + 1][1];
        hand[now + 1][1] = suit;
      }
    }
  }
}

/*
 * analyze_hand: Determines whether the hand contains a
 *               straight, a flush, four-of-a-kind,
 *               and/or three-of-a-kind; determines the
 *               number of pairs; stores the results into
 *               the external variables straight, flush,
 *               four, three, and pairs
 */
void analyze_hand(void)
{
  int num_consec = 0;
  int rank, card, same_rank;

  straight = true;
  flush = true;
  four = false;
  three = false;
  pairs = 0;

  /* check for flush */
  for (card = 1; card < NUM_CARDS; card++)
    if (hand[card][SUIT] != hand[0][SUIT])
      flush = false;

  /* check for straight */
  for (card = 1; card < NUM_CARDS; card++)
    if (hand[card - 1][RANK] + 1 != hand[card][RANK])
      straight = false;

  /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
  card = 0;
  while (card < NUM_CARDS)
  {
    rank = hand[card][RANK];
    same_rank = 0;

    do
    {
      same_rank++;
      card++;
    } while (card < NUM_CARDS && hand[card][RANK] == rank);

    switch (same_rank)
    {
    case 4:
      four = true;
      break;
    case 3:
      three = true;
      break;
    case 2:
      pairs++;
      break;
    }
  }
}

/*
 * print_result: Prints the classification of the hand,
 *               based on the values of the external
 *               variables straight, flush, four, three,
 *               and pairs.
 */
void print_result(void)
{
  if (straight && flush)
    printf("Straight flush");
  else if (four)
    printf("Four of a kind");
  else if (three && pairs == 1)
    printf("Full house");
  else if (flush)
    printf("Flush");
  else if (straight)
    printf("Straight");
  else if (three)
    printf("Three of a kind");
  else if (pairs == 2)
    printf("Two pairs");
  else if (pairs == 1)
    printf("Pair");
  else
    printf("High card");

  printf("\n\n");
}

void clear_hand(void)
{
  int card;

  for (card = 0; card < NUM_CARDS; card++)
  {
    hand[card][RANK] = 0;
    hand[card][SUIT] = 0;
  }
}