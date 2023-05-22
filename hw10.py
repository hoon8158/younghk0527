import os


def input_scores():
    scores = []
    i = 1
    while True:
        n = int(input(f'#{i}? '))
        if n < 0:
            break
        scores.append(n)
        i += 1
    return scores


def get_average(scores):
    total = sum(scores)
    return total / len(scores)


def show_scores(scores):
    for score in scores:
        print(score, end=' ')
    print()


def save_scores_to_file(scores):
    with open('score.bin', 'wb') as file:
        for score in scores:
            byte_data = score.to_bytes(4, 'little')
            file.write(byte_data)


def load_scores_from_file():
    scores = []
    if os.path.isfile('score.bin'):
        with open('score.bin', 'rb') as file:
            while True:
                byte_data = file.read(4)
                if not byte_data:
                    break
                score = int.from_bytes(byte_data, 'little')
                scores.append(score)
    return scores


print('[점수 입력]')
scores = input_scores()

print('\n[점수 출력]')
print('개인점수: ', end='')
show_scores(scores)

avg = get_average(scores)
print(f'평균: {avg:.1f}')

save_scores_to_file(scores)
